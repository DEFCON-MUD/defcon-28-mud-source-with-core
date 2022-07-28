inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 48, 3 }));
  set_short( "Passage - x61y48z3" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y49z3.c",
  "south" : DIR+"/rooms/x61y47z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
