inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 46, 5 }));
  set_short( "Passage - x43y46z5" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y46z5.c",
  "south" : DIR+"/rooms/x43y45z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
