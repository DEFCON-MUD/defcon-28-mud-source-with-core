inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 2 }));
  set_short( "Hallway - x47y26z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y26z2.c",
  "south" : DIR+"/rooms/x47y25z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
