inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 46, 9 }));
  set_short( "Passage - x44y46z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y46z9.c",
  "east" : DIR+"/rooms/x45y46z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
