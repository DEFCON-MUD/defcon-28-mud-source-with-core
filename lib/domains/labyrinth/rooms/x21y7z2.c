inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 7, 2 }));
  set_short( "Corridor - x21y7z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y8z2.c",
  "south" : DIR+"/rooms/x21y6z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
