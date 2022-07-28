inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 22, 8 }));
  set_short( "Corridor - x38y22z8" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y22z8.c",
  "east" : DIR+"/rooms/x39y22z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
