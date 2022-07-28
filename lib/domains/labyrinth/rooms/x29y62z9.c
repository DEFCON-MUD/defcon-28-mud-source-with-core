inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 9 }));
  set_short( "Hallway - x29y62z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y62z9.c",
  "east" : DIR+"/rooms/x30y62z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
