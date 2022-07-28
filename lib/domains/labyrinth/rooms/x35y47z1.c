inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 47, 1 }));
  set_short( "Passage - x35y47z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y48z1.c",
  "south" : DIR+"/rooms/x35y46z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
