inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 4, 0 }));
  set_short( "Hallway - x22y4z0" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y4z0.c",
  "east" : DIR+"/rooms/x23y4z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
