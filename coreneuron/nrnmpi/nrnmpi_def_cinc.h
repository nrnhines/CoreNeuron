/*
Copyright (c) 2014 EPFL-BBP, All rights reserved.

THIS SOFTWARE IS PROVIDED BY THE BLUE BRAIN PROJECT "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE BLUE BRAIN PROJECT
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

int nrnmpi_use;
int nrnmpi_numprocs = 1; /* size */
int nrnmpi_myid = 0; /* rank */
int nrnmpi_numprocs_world = 1;
int nrnmpi_myid_world = 0;
int nrnmpi_numprocs_bbs = 1;
int nrnmpi_myid_bbs = 0;

int nrnmpi_nout_;
int* nrnmpi_nin_;
int nrnmpi_i_capacity_;
NRNMPI_Spike* nrnmpi_spikeout_;
NRNMPI_Spike* nrnmpi_spikein_;

int nrnmpi_localgid_size_;
int nrnmpi_ag_send_size_;
int nrnmpi_send_nspike_;
int nrnmpi_ovfl_capacity_;
int nrnmpi_ovfl_;
unsigned char* nrnmpi_spikeout_fixed_;
unsigned char* nrnmpi_spikein_fixed_;
unsigned char* nrnmpi_spikein_fixed_ovfl_;
