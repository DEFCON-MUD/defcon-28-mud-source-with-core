inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 6 }));
  set_short( "Hallway - x57y38z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y39z6.c",
  "south" : DIR+"/rooms/x57y37z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
