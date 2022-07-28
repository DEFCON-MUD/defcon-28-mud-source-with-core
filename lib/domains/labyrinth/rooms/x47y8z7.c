inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 7 }));
  set_short( "Corridor - x47y8z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y8z7.c",
  "north" : DIR+"/rooms/x47y9z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
