inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 1 }));
  set_short( "Passage - x33y32z1" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y32z1.c",
  "south" : DIR+"/rooms/x33y31z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
