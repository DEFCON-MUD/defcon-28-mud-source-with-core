inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 45, 4 }));
  set_short( "Passage - x19y45z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y46z4.c",
  "south" : DIR+"/rooms/x19y44z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
