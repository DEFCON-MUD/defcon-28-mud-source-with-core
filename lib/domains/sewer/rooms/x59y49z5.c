inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 49, 5 }));
  set_short( "Hallway - x59y49z5" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y50z5.c",
  "south" : DIR+"/rooms/x59y48z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
