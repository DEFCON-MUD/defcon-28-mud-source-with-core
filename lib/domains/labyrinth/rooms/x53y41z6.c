inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 6 }));
  set_short( "Hallway - x53y41z6" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z6.c",
  "south" : DIR+"/rooms/x53y40z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
