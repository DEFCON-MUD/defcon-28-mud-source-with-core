inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 2 }));
  set_short( "Hallway - x35y18z2" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y19z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
