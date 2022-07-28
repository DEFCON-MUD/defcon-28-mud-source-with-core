inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 9 }));
  set_short( "Corridor - x41y62z9" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y62z9.c",
  "east" : DIR+"/rooms/x42y62z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
