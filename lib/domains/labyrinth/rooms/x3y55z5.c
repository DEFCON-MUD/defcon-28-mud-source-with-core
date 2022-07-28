inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 5 }));
  set_short( "Hallway - x3y55z5" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z5.c",
  "south" : DIR+"/rooms/x3y54z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
