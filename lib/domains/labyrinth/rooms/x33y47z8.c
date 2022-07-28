inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 47, 8 }));
  set_short( "Corridor - x33y47z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y48z8.c",
  "south" : DIR+"/rooms/x33y46z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
