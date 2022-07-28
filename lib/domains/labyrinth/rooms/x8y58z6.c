inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 58, 6 }));
  set_short( "Corridor - x8y58z6" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y58z6.c",
  "east" : DIR+"/rooms/x9y58z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
