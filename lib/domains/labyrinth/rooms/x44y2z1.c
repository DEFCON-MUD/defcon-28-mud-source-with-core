inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 1 }));
  set_short( "Hallway - x44y2z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z1.c",
  "east" : DIR+"/rooms/x45y2z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
