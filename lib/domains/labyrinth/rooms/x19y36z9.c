inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 9 }));
  set_short( "Hallway - x19y36z9" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y37z9.c",
  "south" : DIR+"/rooms/x19y35z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
