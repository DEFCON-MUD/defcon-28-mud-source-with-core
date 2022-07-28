inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 64, 8 }));
  set_short( "Hallway - x8y64z8" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y64z8.c",
  "east" : DIR+"/rooms/x9y64z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
