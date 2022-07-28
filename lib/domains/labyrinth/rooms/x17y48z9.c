inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 9 }));
  set_short( "Passage - x17y48z9" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z9.c",
  "south" : DIR+"/rooms/x17y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
