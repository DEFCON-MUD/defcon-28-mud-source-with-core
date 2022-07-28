inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 4 }));
  set_short( "Passage - x23y6z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z4.c",
  "north" : DIR+"/rooms/x23y7z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
