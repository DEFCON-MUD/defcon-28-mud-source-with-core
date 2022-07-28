inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 3 }));
  set_short( "Hallway - x33y62z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y62z3.c",
  "south" : DIR+"/rooms/x33y61z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
