inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 1 }));
  set_short( "Corridor - x3y35z1" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z1.c",
  "south" : DIR+"/rooms/x3y34z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
