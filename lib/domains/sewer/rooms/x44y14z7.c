inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 14, 7 }));
  set_short( "Passage - x44y14z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y14z7.c",
  "east" : DIR+"/rooms/x45y14z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
