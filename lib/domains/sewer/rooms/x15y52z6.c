inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 6 }));
  set_short( "Hallway - x15y52z6" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y52z6.c",
  "east" : DIR+"/rooms/x16y52z6.c",
  "north" : DIR+"/rooms/x15y53z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
