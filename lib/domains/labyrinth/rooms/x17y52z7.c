inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 7 }));
  set_short( "Hallway - x17y52z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y52z7.c",
  "north" : DIR+"/rooms/x17y53z7.c",
  "south" : DIR+"/rooms/x17y51z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
