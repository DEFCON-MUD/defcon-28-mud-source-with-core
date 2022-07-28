inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 46, 9 }));
  set_short( "Passage - x30y46z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y46z9.c",
  "east" : DIR+"/rooms/x31y46z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
