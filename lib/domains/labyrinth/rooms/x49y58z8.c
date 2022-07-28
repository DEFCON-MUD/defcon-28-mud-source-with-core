inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 58, 8 }));
  set_short( "Hallway - x49y58z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y58z8.c",
  "north" : DIR+"/rooms/x49y59z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
