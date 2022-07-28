inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 8 }));
  set_short( "Hallway - x36y0z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z8.c",
  "east" : DIR+"/rooms/x37y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
