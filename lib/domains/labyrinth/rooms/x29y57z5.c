inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 57, 5 }));
  set_short( "Corridor - x29y57z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y58z5.c",
  "south" : DIR+"/rooms/x29y56z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
