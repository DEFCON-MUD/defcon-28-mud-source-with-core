inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 44, 3 }));
  set_short( "Corridor - x14y44z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y44z3.c",
  "east" : DIR+"/rooms/x15y44z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
