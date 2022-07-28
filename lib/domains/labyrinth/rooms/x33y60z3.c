inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 3 }));
  set_short( "Corridor - x33y60z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y61z3.c",
  "south" : DIR+"/rooms/x33y59z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
