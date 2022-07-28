inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 1 }));
  set_short( "Hallway - x35y34z1" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y34z1.c",
  "south" : DIR+"/rooms/x35y33z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
