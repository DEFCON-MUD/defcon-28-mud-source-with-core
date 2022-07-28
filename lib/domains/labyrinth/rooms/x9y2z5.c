inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 5 }));
  set_short( "Hallway - x9y2z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y2z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
