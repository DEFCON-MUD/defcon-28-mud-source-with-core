inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 6 }));
  set_short( "Corridor - x23y52z6" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z6.c",
  "north" : DIR+"/rooms/x23y53z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
