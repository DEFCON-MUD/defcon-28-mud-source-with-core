inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 7 }));
  set_short( "Hallway - x53y34z7" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y34z7.c",
  "south" : DIR+"/rooms/x53y33z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
