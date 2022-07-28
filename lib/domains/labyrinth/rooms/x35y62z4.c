inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 4 }));
  set_short( "Corridor - x35y62z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z4.c",
  "east" : DIR+"/rooms/x36y62z4.c",
  "south" : DIR+"/rooms/x35y61z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
