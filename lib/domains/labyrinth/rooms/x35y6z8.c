inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 8 }));
  set_short( "Hallway - x35y6z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y7z8.c",
  "south" : DIR+"/rooms/x35y5z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
