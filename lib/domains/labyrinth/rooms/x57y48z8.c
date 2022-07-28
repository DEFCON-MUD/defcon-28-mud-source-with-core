inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 48, 8 }));
  set_short( "Corridor - x57y48z8" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y49z8.c",
  "south" : DIR+"/rooms/x57y47z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
