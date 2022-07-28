inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 18, 8 }));
  set_short( "Passage - x53y18z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y18z8.c",
  "south" : DIR+"/rooms/x53y17z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
