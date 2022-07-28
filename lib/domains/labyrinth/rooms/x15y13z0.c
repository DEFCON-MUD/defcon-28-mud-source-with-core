inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 13, 0 }));
  set_short( "Hallway - x15y13z0" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y14z0.c",
  "south" : DIR+"/rooms/x15y12z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
