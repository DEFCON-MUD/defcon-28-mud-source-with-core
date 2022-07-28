inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 48, 9 }));
  set_short( "Hallway - x9y48z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y48z9.c",
  "south" : DIR+"/rooms/x9y47z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
