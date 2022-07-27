inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 49, 9 }));
  set_short( "Hallway - x41y49z9" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y50z9.c",
  "south" : DIR+"/rooms/x41y48z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
