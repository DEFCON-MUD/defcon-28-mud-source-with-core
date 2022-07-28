inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 0 }));
  set_short( "Corridor - x29y15z0" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z0.c",
  "south" : DIR+"/rooms/x29y14z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
