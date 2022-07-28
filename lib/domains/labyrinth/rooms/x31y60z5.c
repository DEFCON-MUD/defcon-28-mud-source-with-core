inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 5 }));
  set_short( "Corridor - x31y60z5" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z5.c",
  "north" : DIR+"/rooms/x31y61z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
