inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 6 }));
  set_short( "Passage - x39y42z6" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y43z6.c",
  "south" : DIR+"/rooms/x39y41z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
