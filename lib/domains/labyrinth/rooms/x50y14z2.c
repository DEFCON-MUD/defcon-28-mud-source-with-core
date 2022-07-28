inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 14, 2 }));
  set_short( "Hallway - x50y14z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y14z2.c",
  "east" : DIR+"/rooms/x51y14z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
