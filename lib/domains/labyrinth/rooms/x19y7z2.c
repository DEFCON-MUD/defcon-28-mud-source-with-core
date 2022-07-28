inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 7, 2 }));
  set_short( "Passage - x19y7z2" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y8z2.c",
  "south" : DIR+"/rooms/x19y6z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
